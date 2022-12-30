const mongoose = require("mongoose");

const conn = mongoose
	.connect("mongodb://127.0.0.1:27017/iezalDb")
	.then((e) => {
		console.log("db connected");
	})
	.catch((err) => {
		console.log(`error = ${err}`);
	});
module.exports = mongoose;
