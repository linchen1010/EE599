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
    let headLineT = document.getElementById("headLineTitle");
    headLine.style.display = "none";
  }
  
  initialize();


async function submit() {
  console.log("In submit!");

  // Set the mouse cursor to hourglass
  //document.body.style.cursor = "wait";

  // Accessing the div that has random value
//   let random_value_element = document.getElementById("random-value");
//   random_value_element.innerHTML = "Please wait...";
  let searchTopic = document.getElementById("searchTopic").value;

  // Show the loader element (spinning wheels)
  let loader = document.getElementById("loader");
  loader.style.display = "inline-block";

  try {
    // Get the min/max values from the user
    let searchTopic = document.getElementById("searchTopic").value;
    //let searchTopic = document.getElementById("searchTopic").value;

    // Address of your backend
    let request = `http://127.0.0.1:5000/?searchTopic=${searchTopic}`;
    console.log("request: ", request);

    // Send an HTTP GET request to the backend
    const data = await axios.get(request);

    console.log("data.data: ", JSON.stringify(data.data, null, 2));
    
    console.log("Search Topic: ", searchTopic);
    
  } catch (error) {
    console.log("error: ", error);
  }

  // Set the cursor back to default
  document.body.style.cursor = "default";

  // Hide loader animation
  loader.style.display = "none";
}

async function headLine() {
    console.log("In headLine!");
  
    let searchTopic = document.getElementById("searchTopic").value;
  
    // Show the loader element (spinning wheels)
    let loader = document.getElementById("loader");
    loader.style.display = "inline-block";
    
    try {
        
        const recieveNews = (newsdata) => {
            const articlesDiv = document.querySelector(".articles")
            newsdata.articles.forEach((article) => {
                    
            //Here we create and add html elements to our html file
                const div = document.createElement("div")
                div.className = "news"
                div.innerHTML = `
                <h2>${article.title}</h2>
                <img src="${article.urlToImage}"/>`
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
  

//console.log("topic: ", searchTopic);

   
    
    // const newsList = document.querySelector('.news-list');
    
    // document.getElementById("submit").addEventListener("onclick", retrieve)

    // function retrieve(e) {

    //     if (input.value == '') {
    //         alert('Input is empty!');
    //     }

    //     e.preventDefault()
        
    //     const apiKey = '504949294bc7419d83beebf27c708229'

    //     let searchTopic = searchTopic;

    //     let url = `http://newsapi.org/v2/everything?q=${searchTopic}&apiKey=${apiKey}`

    //     fetch(url).then((res) => {
    //         return res.json()
    //     }).then((data)=> {
    //         console.log(data);
    //         data.articles.forEach(article =>{
    //             let div = document.createElement('div');
    //             let a = document.createElement('a');
    //             a.setAttribute('href',article.url);
    //             a.setAttribute('target', '_blank');
    //             a.textContent = article.title;
    //             div.appendChild(a);
    //             newsList.appendChild(div);
    //         })
    //     }).catch((error)=>{
    //         console.log(error)
    //     })
    // }
    

        //console.log(searchTopic);

// const recieveNews = (newsdata) => {
//     const articlesDiv = document.querySelector(".articles")
//     newsdata.articles.forEach((article) => {
			
//         //Here we create and add html elements to our html file
//   const div = document.createElement("div")
//   div.className = "news"
//   div.innerHTML = `
//         <h2>${article.title}</h2>
//         <img src="${article.urlToImage}"/>`
//   articlesDiv.appendChild(div)
        
// })
// }

// //Fetch sends a request to the API.
// //Promise makes it possible to run this in the background. När vi får APIet då går den vidare och skickar tillbaka JSON.
// fetch(url)
// .then(response => response.json())
// .then(recieveNews)