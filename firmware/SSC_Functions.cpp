// This #include statement was automatically added by the Particle IDE.
#include "SSC_SlothResolvers/SSC_SlothResolvers.h"
#include "policies.h"
InternetButton b = InternetButton();


// This #include statement was automatically added by the Particle IDE.

// Periodics: ∱ He² 2, Ne¹⁰ 10 (Digital 2), Ar¹⁸ 18, Kr³⁶ 36, Xe⁵⁴ 54, Rn⁸⁶ 86, Uuo¹¹⁸ 118

// All code, knowhow, machine work, etc. was ethically expensive to methodically think thru, deresign, and redesign, and falls under the Fundamental Claims of 14/OWTcB (Si/874,435).
// Let's work together to tune this to be ever more right.
// Write me now please at adan@lifesavers.io for a Distribution and Resolution Partnership.
// Library drops for altarations to IB and also rebuilds of originals. https://github.com/spark/photon/tree/master/libraries
// Break for Rest

/*
 Useful and As Yet Underutilized Firmware Commands: 
 ☐ EEPROM.update(), et. al.
 ☐ 
*/

/*
Dev Task Checklist
☐ Sync Time with Server Daily
☐ Correspond with Webhooks to SSC Server
☐ Build STI Backtrace and Prevention Log, Opt-out Records
☐ Build EEPROM-Preserved Variables and Logs
☐ Build EtOH Sensor Programmatic Loop Needs (Both Assume and Don't Assume Accessible, Higher-Caliber Alternative) 
*/

//SYSTEM_THREAD(ENABLED);

bool dangerous_degree_of_privacy = false; // for operation without networking.. hard to understand
bool rainbow_mode = false; // Rainbow Life fully supported.
bool engauged = true; // Vmonth Engaugement Model for Soulmate Century Calmuniti²² 
bool engaged = true; // Wedding Planning Commencement. 
bool married = false; // Extra Privacy Modes are available for Married Couples.
int cangomango_level = 0; 
int led_ring_count = 0; // For Glowing, Growing LED Circular "Charge up, Calm Down" Models  
int privacy_withholding = 1; // Opcion 0, 1, or 2, with careful specs and an always reliable modal.
float bac_reading = 0.00; // Defaults to BAC of 0.00, unless otherwise network-informed or tested on-site. 
long lastSync = millis();

String bedID = String("Shoreland218_Bed2B");

const int sOR = 232; // Safeti²² Orange, Pt⁷⁸ Level Red Component 
const int sOG = 118; // Safeti²² Orange, Pt⁷⁸ Level Red Component
const int sOB10 = 10; // Safeti²² Orange, Pt⁷⁸ Level Red Component

#define ONE_DAY_MILLIS (24 * 60 * 60 * 1000)


void updateTimeDaily() {
  if (millis() - lastSync > ONE_DAY_MILLIS) {
    Particle.syncTime();

  }
}

Timer updateTime(86400000, updateTimeDaily);

Timer mangoTimer(1869, mangoTimer01869);


void mangoTimer01869() {
  if (b.buttonOn(3)) {
    if (cangomango_level <= 6) {
      cangomango_level += 1;
            
      String cangomango_alert = String("Can.go, Man.go Alert Level " + cangomango_level);
      Particle.publish(cangomango_alert, bedID, 24*60*60, PRIVATE);
      led_ring_count = map(cangomango_level, 0, 5, 1, 12); // This design and (some) predecessors can be reformed to include resculpted time_struct in 2 hour blocks, with all 12 blocks represented.
        
      for (int i=1; i <= 12; i++) {
	if (led_ring_count <= i) {
	  b.ledOn(i, 236, 118, 10);
	}
	else {
	  b.ledOff(i);
	}
      }
    }
    else {
      Particle.publish("Max-Alert: Doorbang | Doorbreak| Reset",bedID,24*60*60, PRIVATE);
    }
  }
  else {
    mangoTimer.stop();
  }
    
}





STARTUP(); // Hardware level initations that run instantly on power_on, before setup() and wireless networking begins. Empty for now.

void setup() { // For Networking Setup
  b.begin();
  updateTime.start();
  Particle.connect();
}

void loop(){
    


  // Check Wifi Connection Regularly.. still needs work for hhomes to alert on disconnect
  if (WiFi.ready() == true) { // A simple wi´fi health check, should run faster than any other operation
  }
  else {
    Particle.connect();  // In event of dislatch from WiFi, like a router failure or power loss without a device failure or power loss, will reconnect the device. Don't touch this.
  }

  if   (b.buttonOn(3)) {cangoMango();}
  else {cangoMango_ledOff();}

  if   (b.buttonOn(4)) {seLever();}
  else {seLever_ledOff();}


  if   (b.buttonOn(1)) {cprEmergentAlert();}
  else {cprEmergentAlert_ledOff();}

  if   (b.buttonOn(2)) {steep();}
  else {steep_ledOff();}

    
  if   (b.allButtonsOn()) {sentinelFlag();}
  else {sentinelFlag_ledOff();}

}


/*
Button Checks
☑ Installation points USB (/Power/PoEEthernet/et.al.) connectors downward, toward floor outlet! (Depending on model spec)
☑ Alignments using ordinary cardinal indicators are 3 - N, 4 - E, 1 - S, 2 - W
☐ EPROM.read(), EEPROM.write(), EEPROM.put(),  
*/


void steepConfirm() {
    
}

void cangoMango() { // TODO: REMEMBER TO IMPLEMENT RELEASE CHARGE
  b.ledOn(6, 232, 118, 0);
  Particle.publish("Can.go:Man.go StandUpErect", bedID, 86400, PRIVATE);
  mangoTimer.start();
  delay(418); // Debounce, to prevent 4x multiplier outgoing repeats at this execution speed
}



void cangoMango_ledOff() {
  b.ledOff(6);
}


void cprEmergentAlert() {
  b.ledOn(1, 255, 255, 255);
  Particle.publish("CPR Emergent Alert", bedID, 3240, PRIVATE);
  delay(418); // Debounce, to prevent 4x multiplier outgoing repeats at this execution speed
}


void cprEmergentAlert_ledOff() {
  b.ledOff(1);
}


void disafetiOrange() { // A slight home-baked variant of Safeti²² Orange (232, 118, 0) as (232, 118, 10), incorporating digital 2 and 10.
  // To Be Reintegrated 
}

/*
Buttons 3, 1 (N, S) are for health consents and hhearthh consent safeti calls
☐ Buttons 4, 2 (E, W) are for quick steep entries
☐ Hold down of 3, N and 1, S are for CPR Calls, with different modaliti response patterns
☐ All Button Sustained Smash is for Call Readiness and Wall, Headboard Knock Accelerometer listener, unless otherwise indicated
☐ Up for Hi Road, Down for Lo Road, Sustained Smash for ICEsublime under Reasonable Doubt of Conscientiousness
☐ With Physical Prototype Altarations > Left for cornering into steep-based long-term memory potentiation, Right for rising up into the Zero Hour, with 1st, 2nd, 3rd Steps (Actually, this is a very hard problem to heuristically set, because it plays into clockwise, counterclockwise culture-schemas for the equal radian rate clockface, and that would directly militate against the reinforced touch-based articulation of steep as a component of the left hand side rather than right hand side of the clockface, with all associated benefits of that regular touch. This becomes important because it helps people look ahead when they see an hourhand past noon to the upcalming touch of steep, and this )

For testing, i'm rushing this out, to make sure everything's in place. there's some more advanced code on my other laptop, but i'll have to recreate quickly, on deadline.
These LEDs are in Red Green Blue (RGB) Progression, with 255 being a hi light-up. So, b.ledOn(3, 255, 0, 0); is going to light up LED 3 to a Scary Red. Mix colors.
*/



// Publish alert, indicate hours steep to steep researcher on supportive consent, and pulse steepfulness
// Consider code in link below for fade out, fade in steep indicator lights, with interrupt attachment above
// Make sure it doesn't block execution of safeti critical code instruction loop
// http://www.waitingforfriday.com/index.php/Controlling_LED_brightness_using_PWM


void sentinelFlag() {
  b.ledOn(1, 255, 255, 255);
  b.ledOn(4, 255, 255, 255);
  b.ledOn(7, 255, 255, 255);
  b.ledOn(10, 255, 255, 255);
  Particle.publish("Sentinel Flag | Rainbow Call", bedID, 28800, PRIVATE);
  delay(418); // Debounce, to prevent 4x multiplier outgoing repeats at this execution speed
  Particle.publish("Man.go Possibility, Two", bedID, 28800, PRIVATE);
  delay(418);
  sentinelFlag_ledOff();
}

void sentinelFlag_ledOff() {
  b.ledOff(1);
  b.ledOff(4);
  b.ledOff(7);
  b.ledOff(10);
}

void seLever() { // Raising up in the morning. This isn't "waking up", in the English sense.. it's se lever! It's when You get out of bed, not when You first become conscious that You're conscious.
  b.ledOn(9, 255, 255, 0);
  Particle.publish("MeLevanto", bedID, 3600, PRIVATE);
  delay(418); // Debounce, to prevent 4x multiplier outgoing repeats at this execution speed
}

void seLever_ledOff() {
  b.ledOff(9);
}

void steep() { // For study-worthy sleep, "steep"
  b.ledOn(3, 0, 255, 255);
  Particle.publish("Steep", bedID, 28800, PRIVATE);
  delay(418); // Debounce, to prevent 4x multiplier outgoing repeats at this execution speed
}

void steep_ledOff() {
  b.ledOff(3);
}



void glowFace(){ 
  int x = 1;
  for (int i = 0; i > -1; i = i + x) {
    for (int k = 1; k <= 12; k++) {
      analogWrite(k, i);
      if (i == 255) {
	x = -1;
      }
    }
    delay(10);
  }
}




    
        
        
        
// b.ledOn(1-11, 0-255, 0-255, 0-255); b.ledOff(1-11, 0-255, 0-255, 0-255);
// b.allLedsOn(0-255, 0-255, 0-255); b.allLedsOff();
// b.allButtonsOn(); b.allButtonsOff();
// Particle.publish("event-name", "NULL", 2, PRIVATE);

/* External Interrupts

Photon: All pins with the exception of D0 and A5 (since at present Mode Button external interrupt(EXTI) line is shared with D0, A5). 
Also please note following are the pins for which EXTI lines are shared so only one can work at a time:

D1, A4
D2, A0, A3
D3, DAC
D4, A1

*/
