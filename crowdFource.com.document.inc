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