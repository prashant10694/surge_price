# surge_price




ALGORITHM FOR SURGE

The algorithm for surge_price should depend on the difference between NUMBER OF CARS AND NUMBER OF USERS
so formula for Surge Price should contain 

1.  Factor proportional to the difference between the users and cars.
2.  Secondly it should not show same results for same differences for example

let say cars  = 2 and users = 7
and other case cars  = 4 and users  = 9 
 
the surge should be different so we have to include another factor i.e (users/(users+cars)) 
that will decrease my surge if there are more users and will also normalize the result.

so my final formula  reduces to 

                                (2*(users-cars)*users)
                                /
                                (10 * (users+cars))
                                
                                
                                
                                
ALGORITHM FOR DISCOUNT

The algorithm for Discount should depend on the difference between NUMBER OF CARS AND NUMBER OF USERS
so formula for Discount should contain 

1.  Factor proportional to the difference between the cars and users.
2.  Secondly it should not show same results for same differences for example

let say cars  = 2 and users = 7
and other case cars  = 4 and users  = 9 
 
the discount should be different so we have to include another factor i.e (cars/(users+cars)) 
that will decrease my discount if there are less cars and will also normalize the result.


so my final formula  reduces to 

                                (2.5*(cars-users)*cars)
                                /
                                (users+cars)
                                
Thank You
Prashant Jain
                                  
