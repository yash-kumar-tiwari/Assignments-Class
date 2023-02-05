import * as fs from 'fs';
var readstream=fs.createReadStream("data1.txt");
//var writeStream=fs.createWriteStream("data.txt");
var file_content="hell how are you and  i am fine";
readstream.on("data1",(chunk)=>{
    file_content+=chunk



readstream.on("end",()=>{
    console.log("file_content:"+file_content);
   var i;
var count = 0;

    for (i=0; i < chunk.length; ++i)
      if (chunk[i] == 10) count++;
});
readstream.on("error",(err)=>{
    console.log(err);

 
  
    //console.log(count);
  });
  });
console.log(file_content);