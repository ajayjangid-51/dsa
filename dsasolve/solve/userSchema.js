const mongoose = require("./");

const userSchema = new mongoose.Schema(
	{
		name: String,
		password: String,
	},
	{
		timestamps: true,
	}
);

const userModel = mongoose.model("users", userSchema);
module.exports = userModel;
