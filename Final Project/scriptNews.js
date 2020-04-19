const apiKey = '504949294bc7419d83beebf27c708229'
const url = 'http://newsapi.org/v2/top-headlines?' +
            'country=us&' +
            `apiKey=${apiKey}`;


function initialize() {
    // Initialize min and max values
    document.getElementById("searchTopic").value = "";
    // Hide the loader in the beginning
    let loader = document.getElementById("loader");
    loader.style.display = "none";
    let headLine = document.getElementById("headLineTitle");
    headLine.style.display = "none";
  }
  
  initialize();


async function submit() {
  console.log("In submit!");

  document.body.style.cursor = "wait";

  // Get search topic from the user
  let searchTopic = document.getElementById("searchTopic").value;

  // Show the loader element (spinning wheels)
  let loader = document.getElementById("loader");
  loader.style.display = "inline-block";

  try {

    // Address of backend
    let request = `http://127.0.0.1:5000/?searchTopic=${searchTopic}`;
    console.log("request: ", request);

    // Send an HTTP GET request to the backend
    const data = await axios.get(request);

    console.log("data.data: ", JSON.stringify(data.data, null, 2));
    const url_search = `http://newsapi.org/v2/everything?`+
                       `q=${searchTopic}&` +
                       `from=2020-03-19&` +
                       `sortBy=publishedAt&` +
                       `apiKey=${apiKey}`;

    const searchNews = (newsdata) => {
            const articlesDiv = document.querySelector(".articles")
            newsdata.articles.forEach((article) => {
                    
            //Here we create and add html elements to our html file
                const div = document.createElement("div")
                div.className = "news"
                div.innerHTML = `
                <br>
                <a href="${article.url}">
                  <img src="${article.urlToImage}" alt="News Image" style="width:100%">
                   <div class = "content">
                    <h1> ${article.title} </h1>
                    <p> ${article.description} </p>
                  </div>
                </a>
                `
                articlesDiv.appendChild(div);
                
            })
        }
        fetch(url_search)
        .then(response => response.json())
        .then(searchNews)
        
        console.log(url_search);
    
  } catch (error) {
    console.log("error: ", error);
  }

  // Set the cursor back to default
  document.body.style.cursor = "default";

  // Hide loader animation
  loader.style.display = "none";
}

// do an other version for TW headline
async function headLine() {
    console.log("In headLine!");
  
    // Show the loader element (spinning wheels)
    let loader = document.getElementById("loader");
    loader.style.display = "inline-block";
    let headline = document.getElementById("headLineTitle");
    headline.style.display = "block";

    // display Headline News
    try {
        
        const recieveNews = (newsdata) => {
            const articlesDiv = document.querySelector(".articles")
            newsdata.articles.forEach((article) => {
                    
            //Here we create and add html elements to our html file
                const div = document.createElement("div")
                div.className = "news"
                div.innerHTML = `
                <br>
                <a href="${article.url}">
                  <img src="${article.urlToImage}" alt="News Image" style="width:100%">
                   <div class = "content">
                    <h1> ${article.title} </h1>
                    <p> ${article.content} </p>
                  </div>
                </a>
                `
                articlesDiv.appendChild(div);
                
            })
        }
        fetch(url)
        .then(response => response.json())
        .then(recieveNews)
        
      
    } catch (error) {
      console.log("error: ", error);
    }
  
    // Set the cursor back to default
    document.body.style.cursor = "default";
  
    // Hide loader animation
    loader.style.display = "none";
  }