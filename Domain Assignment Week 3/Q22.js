import * as http from 'http';

var nodeserver;
nodeserver = http.createServer((req,res)=>{
    res.write("Welcome to the Node Server");
    res.end();
});

nodeserver.listen(8888);

console.log("Server Started at http://localhost:8888");