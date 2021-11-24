# Input
[Button code](./Button.ino)  
This circuit would give random values when the button isn't pressed  
![](https://i.imgur.com/WCceOy3.png)  

Connecting the button to ground will prevent loose voltage from going into the input pin. Making sure it's connected with a resistor of high enough value makes it so that there will still be enough electrons flowing into the input pin when the button is pressed to detect a `HIGH` signal.
![](https://i.imgur.com/AVdj8yq.png)
