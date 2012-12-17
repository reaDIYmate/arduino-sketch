#include <Configuration.h>
#include <eepromAddresses.h>
#include <Facebook.h>
#include <Gmail.h>
#include <Inbox.h>
#include <Resources.h>
#include <Settings.h>
#include <Twitter.h>
#include <SoundCloud.h>
#include <SdFat.h>
#include <Servo.h>


#include <PusherTrajectory.h>
#include <SdTrajectory.h>
#include <ServoControl.h>
#include <Trajectory.h>

#include <Api.h>
#include <Audio.h>
#include <BufferedStream.h>
#include <digitalWriteFast.h>
#include <Download.h>
#include <ExtendedStream.h>
#include <HttpClient.h>
#include <JsonStream.h>
#include <PusherClient.h>
#include <SerialStream.h>
#include <Sha256.h>
#include <StatusLed.h>
#include <Vs1011.h>
#include <Wifly.h>

#include <Button.h>
#include <Dispatcher.h>
#include <Fsm.h>
#include <Motion.h>
#include <Personality.h>
#include <Player.h>
#include <Signals.h>

Dispatcher dispatcher;

void setup () {
    dispatcher.setup();
}

void loop() {
    dispatcher.loop();
}
