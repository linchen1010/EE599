const apiKey = '504949294bc7419d83beebf27c708229'

function initialize() {
    // Initialize min and max values
    document.getElementById("searchTopic").value = "";
    // Hide the loader in the beginning
    let headLine = document.getElementById("headLineTitle");
    headLine.style.display = "none";
    let redirect = document.getElementById("formFooter");
    redirect.style.display = "none";
  }

/**
 * A promise that resolves after t ms.
 * @param {Number} t 
 */

const delay = function(t) {
  return new Promise(resolve => setTimeout(resolve, t));
};
  
  initialize();

  async function login() {
    console.log("In login!");

    let email_address = document.getElementById("email_address").value;
    let suscribe = document.getElementById("suscribe").value;

    console.log("email_address: ",email_address);

    if (email_address==='') {
      alert("Please enter email address to continue!")
      return false;
    }

    console.log("suscribe: ", suscribe);
  
    document.body.style.cursor = "wait";

  
    try {
  
      // Address of backend
      let request = `http://127.0.0.1:5000/register?email_address=${email_address}`;
      console.log("request: ", request);
  
      // Send an HTTP GET request to the backend
      const data = await axios.get(request);
  
      console.log("data.data: ", JSON.stringify(data.data, null, 2));

      await delay(2000);
      location.replace("http://127.0.0.1:3000")
      
    } catch (error) {
      console.log("error: ", error);
      console.log("error.status: ",error.response.status)
    }
  
  }

  async function loginNo() {
    console.log("In loginNo!");
    document.body.style.cursor = "wait";

    
      let redirect = document.getElementById("formFooter");
      redirect.style.display = "block";
      await delay(2000);
      location.replace("http://127.0.0.1:3000")
      
     
      console.log("error: ", error);
    
  
    // Set the cursor back to default
    document.body.style.cursor = "default";
  }


/*************************
**     handle search    **
*************************/
async function submit() {
  console.log("In submit!");

  // Get search topic from the user
  let searchTopic = document.getElementById("searchTopic").value;
  
  let headline = document.getElementById("headLineTitle");
    headline.style.display = "none";

  if (searchTopic==='') {
    alert("Search topic is not provided!")
    return false;
  }

  document.body.style.cursor = "wait";

  // clear current news before displaying new news
  let div = document.querySelector('.articles');
  while(div.firstChild){
    div.removeChild(div.firstChild);
  }

  try {

    // Address of backend
    let request = `http://127.0.0.1:5000/?searchTopic=${searchTopic}`;
    console.log("request: ", request);

    // Send an HTTP GET request to the backend
    const data = await axios.get(request);

    console.log("data.data: ", JSON.stringify(data.data, null, 2));

    let fromDate = "2020-04-01";
    let toDate = "2020-04-20";
    let sortOption = "relevancy"; // relevancy & popularity
    
    const url_search = `http://newsapi.org/v2/everything?`+
                       `q=${searchTopic}&` +
                       `from=${fromDate}&` +
                       `to=${toDate}` +
                       `sortBy=${sortOption}&` +
                       `apiKey=${apiKey}`;
    
    await delay(1000);

    const searchNews = (newsdata) => {
            const articlesDiv = document.querySelector(".articles");

            newsdata.articles.forEach((article) => {
                    
            //Here we create and add html elements to our html file
                const div = document.createElement("div")
                // const div = document.getElementById("articles");
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
        
        // console.log(url_search);
    
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

    document.body.style.cursor = "wait";
    // Show the loader element (spinning wheels)
    let headline = document.getElementById("headLineTitle");
    headline.style.display = "block";

    // clear current news before displaying new news
    let div = document.querySelector('.articles');
    while(div.firstChild){
      div.removeChild(div.firstChild);
    }

    // display Headline News
    try {
        // const url = 'http://newsapi.org/v2/top-headlines?' +
        //     'country=us&' +
        //     `apiKey=${apiKey}`;
        let source = 'cnn'
        const url = `https://newsapi.org/v1/articles?source=${source}&apiKey=504949294bc7419d83beebf27c708229`;
        
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
                    <p> ${article.description} </p>
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

  
  function isNetworkError(err) {
    return !!err.isAxiosError && !err.response;
  }