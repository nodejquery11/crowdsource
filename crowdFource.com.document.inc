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
Note: Running the Auth.js, it will call the models (User.js) and create dynamic table in mongo db
Note: if you call the page in redirect function then it first go to search the routes.js file and then call the main model or routes
res.redirect('/deshboard') -> app.js -> routes.js [custom module]

Commit the code


#19/Aug/2016
Task:-
Excel data 
Remove the data from DB
Deactivate the data
Resign the user to deactive the employee

admin.js
Line# 363

#Once dashboard appear then calling pages
->routes.js -> getDashboardView[line#109]
->jobList.js -> [line#420] 
[Note: if your profile has not been created then it will call directly function like app.all('*', Access.checkUserProfile);]
->userSkillProfile.hjs
dashboard->JobList.js[420,446][renderDashboardJobs:57,239]

jobEdit.hjs [Ajax: 893]




#Create Table
  db.createCollection(
    "location",
        {country:{$type: "string"}},
        {location1:{$type: "string"}},
        {location2:{$type:"string"}}
    )

#Insert Value
{country":"India"
 "location1":"Bangalore"
 "location2":"BDC1 - 71 - Cunningham Road"}
