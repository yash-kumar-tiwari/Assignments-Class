import express from 'express';
import indexController from '../controllers/indexController.js ';

const router = express.Router();

router.get("/", (req,res)=>{
    res.render("register",{"output":""});
});

router.post("/", (req,res)=>{
    // console.log(req.body);
    indexController.registerUser(req.body).then((result)=>{
        res.render("register", {"output":"User Detail Registered Successfully..."});
    }).catch((err)=>{
        res.render("register", {"output":err});
    });
});

export default router;