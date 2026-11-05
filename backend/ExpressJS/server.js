const express = require("express");
const app = express();

const port = 5500;

// app.set("view engine","ejs");

app.get("/", (req, res) => {
  res.send("app working");
});

app.listen(port, () => {
  console.log(`listening on port ${port}`);
});
