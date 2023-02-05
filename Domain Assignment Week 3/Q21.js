import * as fs from 'fs';

var file_data = "Name: Yash Tiwari, Subject: MERN Stack, Course: NodeJS";

fs.writeFileSync("fileWrite.txt", file_data);

console.log("File Write Successfully");