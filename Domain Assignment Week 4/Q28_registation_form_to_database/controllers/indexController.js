import indexModel from '../models/indexModel.js';

class indexController
{
    registerUser(userDetail)
    {
        // console.log(userDetail);
        return new Promise ((resolve,reject)=>{

            userDetail = {...userDetail, "_id":3 ,"status":1, "role":"user","info":Date()};
            indexModel.registerUserModel(userDetail).then((result)=>{
                resolve(result);
            }).catch((err)=>{
                reject(err);
            });
        });
    }
}

export default new indexController();