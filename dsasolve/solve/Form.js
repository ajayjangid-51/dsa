import React , {useState} from "react";
import axios from "axios";

const API = "";

function form() {
    const [userName , setUserName] = useState("");
    const [password , setPassword] = useState("");


    const loginn = (e)=>{
        e.preventDefault();
        const userDetail = {userName, password};
        axios.post(API, userDetail).then(res=>{
            console.log(`the server response is ${res}`);
        })
    }

	return <div>i am form:-
        <form action="">
            <input type="text"  placeholder="your name" onChange={(e)=>{setUserName(e.target.value)}} />
            <input type="password" name="your password" id="" onChange={(e)=>{e.target.value}}  />
            <button type="submit" onClick={loginn} >login</button>
        </form>

    </div>;
}

export default form;
