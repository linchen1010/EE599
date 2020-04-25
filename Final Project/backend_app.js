"use strict";

const express = require("express");
const app = express();
const NewsAPI = require('newsapi');
const newsapi = new NewsAPI('504949294bc7419d83beebf27c708229');
const apiKey = '504949294bc7419d83beebf27c708229';

global.fetch = require("node-fetch");
const nodemailer = require("nodemailer");
const moment = require("moment");



// We need cors middleware to bypass CORS security in browsers.
const cors = require("cors");

app.use(express.static("static"));
app.use(cors());
// app.use(function(req, res, next) {
//   res.header("Access-Control-Allow-Origin", "YOUR-DOMAIN.TLD"); // update to match the domain you will make the request from
//   res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");
//   next();
// });

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

app.get("/register", async function(req, res) {
  if (req.query && Object.keys(req.query).length >= 0) {
    console.log("I got a email address!");
    handleLogin(res, res, req.query);
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



async function handleLogin(req, res, query) {
  let error = "NO_ERROR";
  let email_address;

  console.log("query: ", JSON.stringify(query));
  // If there was a query (a query string was sent)
  if (
    query !== undefined &&
    query.email_address !== undefined
  ) {
    email_address = query.email_address;
  } else {
    error = "ERROR: email_address not provided";
  }

  //Generate the output
  let output = {
    email_address : email_address
  };

    //check if search work

  //Convert output to JSON
  let outputString = JSON.stringify(output, null, 2);
  console.log("outputString: ", outputString);

  // Let's generate some artificial delay!
  await delay(500);

  // Send it back to the frontend.
  res.send(outputString);
}

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

    //check if search work
    searchTopic = query.searchTopic;
    newsapi.v2.everything({
      q: `${searchTopic}`,
      sources: 'bbc-news,the-verge',
      domains: 'bbc.co.uk, techcrunch.com',
      from: '2020-04-01',
      to: '2017-04-23',
      language: 'en',
      sortBy: 'relevancy',
      page: 2
    }).then(searchResult => {
      // console.log(searchResult);
      /*
        {
          status: "ok",
          articles: [...]
        }
      */
    });

  //Convert output to JSON
  let outputString = JSON.stringify(output, null, 2);
  console.log("outputString: ", outputString);

  // Let's generate some artificial delay!
  await delay(500);

  // Send it back to the frontend.
  res.send(outputString);
}

displayHeadLine();


// check if response is valid
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