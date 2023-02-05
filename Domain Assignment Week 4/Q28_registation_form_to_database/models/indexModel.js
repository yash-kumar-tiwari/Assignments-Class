import './connection.js';

import RegisterSchemaModel from '../schema/RegisterSchema.js';

class indexModel
{
    registerUserModel(userDetail)
    {
        return new Promise((resolve,reject)=>{
        // a document instance
        var obj = new RegisterSchemaModel(userDetail);

        // save model to database
        obj.save((err, result)=>{
        err ? reject(err) : resolve(result);

        });
        });
    }
}

export default new indexModel();