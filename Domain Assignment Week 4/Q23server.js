// url routing - as per url path

import * as http from 'http';
import * as url from 'url';

http.createServer((req, res)=>{
    var urlobj= url.parse(req.url, true);
    // console.log(urlobj);

    var msg;

    if(urlobj.pathname=="/")
    msg="/ or Home Page Invoked";
    else if(urlobj.pathname=="/home")
    msg="/ or Home Page Invoked";
    else if(urlobj.pathname=="/about")
    msg="/about Page Invoked";
    else if(urlobj.pathname=="/contact")
    msg="/contact Page Invoked";
    else if(urlobj.pathname=="/service")
    msg="/service Page Invoked";
    else if(urlobj.pathname=="/login")
    msg="/login Page Invoked";
    else
    msg="Invalid Url Invoked";

    res.write("<h1>"+msg+"</h1>");
    res.end();

}).listen(8081);

console.log("Server Port 8081... http://localhost:8081");