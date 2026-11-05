const apiKey = "996fb7b2709f43e1b8ebbf27290fce44"; 
const newsContainer = document.getElementById("news-container");
const sectionTitle = document.getElementById("section-title");

async function getCategoryNews(category) {
  sectionTitle.textContent = `${capitalize(category)} News`;
  const url = `https://newsapi.org/v2/top-headlines?country=us&category=${category}&pageSize=10&apiKey=${apiKey}`;
  fetchAndDisplayNews(url);
}

async function searchNews() {
  const query = document.getElementById("search-input").value.trim();
  if (!query) return alert("Please enter a search term.");
  sectionTitle.textContent = `Search Results for "${query}"`;
  const url = `https://newsapi.org/v2/everything?q=${encodeURIComponent(query)}&pageSize=10&apiKey=${apiKey}`;
  fetchAndDisplayNews(url);
}

async function fetchAndDisplayNews(url) {
  newsContainer.innerHTML = "<p>Loading...</p>";
  try {
    const res = await fetch(url);
    const data = await res.json();

    if (data.status === "ok") {
      renderArticles(data.articles);
    } else {
      newsContainer.innerHTML = `<p>Error: ${data.message}</p>`;
    }
  } catch (error) {
    newsContainer.innerHTML = `<p>Something went wrong: ${error.message}</p>`;
  }
}

function renderArticles(articles) {
  newsContainer.innerHTML = "";
  if (articles.length === 0) {
    newsContainer.innerHTML = "<p>No articles found.</p>";
    return;
  }

  articles.forEach(article => {
    const articleDiv = document.createElement("div");
    articleDiv.className = "article";

    articleDiv.innerHTML = `
      <img src="${article.urlToImage || 'https://via.placeholder.com/300x160'}" alt="Image">
      <h3>${article.title}</h3>
      <p>${article.description || 'No description available.'}</p>
      <a href="${article.url}" target="_blank">Read More →</a>
    `;
    newsContainer.appendChild(articleDiv);
  });
}

function capitalize(str) {
  return str.charAt(0).toUpperCase() + str.slice(1);
}

getCategoryNews('general');
