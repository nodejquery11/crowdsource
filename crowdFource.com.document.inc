app.js -> [config]('dev') -> index.js


Function:-
render('<file_name>') //to build the html page
redirect(arg) //to redirect the page in particular page


Question:-
app.js::
line#139 (Auth.localSignup [get])
line#140 (Auth.localUserCreate [post])
Auth.js
line#5 ../models/User
line#20 User.register = (new User)
line#420 getDashboardView [need to understand]

20/Aug/16
Que: difference between generate location and current location

Note: Running the Auth.js, it will call the models (User.js) and create dynamic table in mongo db
Note: if you call the page in redirect function then it first go to search the routes.js file and then call the main model or routes
res.redirect('/deshboard') -> app.js -> routes.js [custom module]
#Once dashboard appear then calling pages
->routes.js -> getDashboardView[line#109]
->jobList.js -> [line#420] 
[Note: if your profile has not been created then it will call directly function like app.all('*', Access.checkUserProfile);]
->userSkillProfile.hjs
dashboard->JobList.js[420,446][renderDashboardJobs:57,239]


Line#904 / 88[util.js] / 983 / #228[IMP::JobPost.js]
getCountryList



#19/Aug/2016
Task:-
Excel data 
Remove the data from DB
Deactivate the data
Resign the user to deactive the employee
Location::
1. while upload CSV
Admin.js
[
  Line#319: var currentLocation = json.CurrentLocation.split("-");
  Line#356
      country: currentLocation[0].toUpperCaseFirstChar(),
      location1: currentLocation[1],
      //location2: User.getRandomDefaultLocation(),
      location2: currentLocation[2]+"-"+currentLocation[3], 
]
2. Fetch records from DB and fill it in drop down
Job.js
[
 Line#239
      /*Newly added for fetching country/location 1/ location 2 details*/
      var countryList = new mongoose.Schema({
          country: String,
          location1: String,
          location2: String
      });

      countryList.getCountry = function(){
        console.log("Add country");
          return this.find().populate('country');
      };

      var CountryList = mongoose.model('CountryList', countryList);

      module.exports = {
        Application: Application,
        Job: Job,
        Country: CountryList
      };
]




Mongo Db:
db.getCollection('users').update({<field_name>:'vikas.bose'},{$set:{<field_name>:true,<array_field>:['value1','value2'..]}})
[https://docs.mongodb.com/manual/reference/operator/update/set/#up._S_set]
#Create Table
  db.createCollection(
    "location",
        {country:{$type: "string"}},
        {location1:{$type: "string"}},
        {location2:{$type:"string"}}
    )

#Insert Value
{"country":"India",
 "location1":"Bangalore",
 "location2":"BDC1 - 71 - Cunningham Road"}

 #Fetch records from collection using filters
 db.location.find({"country":"India", "location1":"Chennai"}).pretty() //it will give you formated query string

15/Sep/16
https://www.youtube.com/watch?v=OlapNW9Jc8s 
What is the difference between putting -g or not to install express js?
It allow us to put express globally and you can access it. For installing the package we use the --save. After installing the express js using npm command, we have to run the express command directly so it will create the sekaleton of express framwork.
If you check the package.json, there will be commond call start. So you need to run the "npm start" and it will run the server. But nothing is written on the page so it will not show anything.

How to create package.json?
using commond npm init, hit untill you will not get the 'yes'. By because we create this package.json, so if we install any package then we ca directly save using flag --save. Then we make changes on "main" the package.json, so that it will call directly to the app.js.
Now we can install the --save express so it will add on the package.json file. And it will create the dependancy of express js.

What is nodeman module?
This is the node file, which restart the server whenever you make any chages in any file. SO it will helpful to user or developer to allow restart the system without any deal.

How to manage the session in express js?
There are few steps
1. need to install the express js and express-session js 
2. app = express();
3. app.use(session({secret: 'anyvalue'})); //It is just session_start()
4. initilize the session sess = req.session;
   sess.email //$_SESSION['email'];
   
https://www.youtube.com/watch?v=eB9Fq9I5ocs&spfreload=5   

Topic:
resteasy chrome






