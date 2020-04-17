"use strict";

const express = require("express");
const app = express();
const NewsAPI = require('newsapi');
const newsapi = new NewsAPI('504949294bc7419d83beebf27c708229');
const apiKey = '504949294bc7419d83beebf27c708229';

// We need cors middleware to bypass CORS security in browsers.
const cors = require("cors");

app.use(express.static("static"));
app.use(cors());

let port = 5000;

/**
 * A promise that resolves after t ms.
 * @param {Number} t 
 */
const delay = function(t) {
  return new Promise(resolve => setTimeout(resolve, t));
};


/**
 * The default path
 */
app.get("/", async function(req, res) {
  if (req.query && Object.keys(req.query).length >= 0) {
    console.log("I got a query!");
    handleGet(res, res, req.query);
  }
});

app.listen(port, err => {
  console.log(`Listening on port: ${port}`);
});
//-----------------------------------------------------------------------------
/**
 * Handles a Get request
 * @param {Object} req 
 * @param {Object} res 
 * @param {Object} query 
 */
async function handleGet(req, res, query) {
  let error = "NO_ERROR";
  let searchTopic;

  console.log("query: ", JSON.stringify(query));
  // If there was a query (a query string was sent)
  if (
    query !== undefined &&
    query.searchTopic !== undefined
  ) {
    searchTopic = query.searchTopic;
  } else {
    error = "ERROR: Search topic not provided";
  }

  //Generate the output
  let output = {
    searchTopic: searchTopic
  };

  //Convert output to JSON
  let outputString = JSON.stringify(output, null, 2);
  console.log("outputString: ", outputString);

  // Let's generate some artificial delay!
  await delay(1000);

  // Send it back to the frontend.
  res.send(outputString);
}

// To query top headlines
// All options passed to topHeadlines are optional, but you need to include at least one of them
function displayHeadLine() {
  newsapi.v2.topHeadlines({
    q: 'trump',
    category: 'politics',
    language: 'en',
    country: 'us'
  }).then(response => {
    console.log(response);
  /*
    {
      status: "ok",
      articles: [...]
    }
  */
  });
}