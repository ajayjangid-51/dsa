const express = require("express");
const userModel = require("./userSchema");
const app = express();

app.use(express.json()); //middlewares
app.use(express.urlencoded({ extended: true }));

app.get("/loginn", (req, res) => {
	userModel.find({ name: req.body.userName }, async (user) => {
		if (user) {
			res.send("soorry user already exits");
		} else {
			const { userName, userPassword } = req.body;
			const userData = {
				name: userName,
				password: userPassword,
			};
			const data = new userModel(userData);
			const dbresponse = await data.save();
			res.send("okay user stored successfully");
		}
	});
});

app.listen(5000, () => {
	console.log("okay server started");
});
