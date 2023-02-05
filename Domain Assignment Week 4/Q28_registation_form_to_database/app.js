import express from 'express';
import * as url from 'url';
import * as path from 'path';
import bodyParser from 'body-parser';

const app = express();
const __dirname = url.fileURLToPath(new URL ('.', import.meta.url));

// configuration for static file loading
app.use(express.static(path.join(__dirname, 'public')));

//configuration to extract request body content
app.use(bodyParser());

// configuration for template pages and template engines
app.set("view engine", "ejs");
app.set("views", "./views");

//application level url routes
import index from './routes/IndexRoute.js';

//route level middleware
app.use("/", index);

app.listen(3000);

console.log("Server Invoked at link http://localhost:3000");