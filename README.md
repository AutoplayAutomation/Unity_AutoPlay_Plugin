# Getting Started!

Contact:  [autoplay.automation@gmail.com](mailto:autoplay.automation@gmail.com)

[Youtube](https://www.youtube.com/watch?v=YS8msXrFwZA)

## Setup

-   Download AutoPlay Plugin for Unity. There is two versions of plugin for NGUI and standard Unity UI widgets  [NGUI](https://github.com/AutoplayAutomation/Unity_AutoPlay_Plugin/tree/master/0.00.1/NGUI)
[Standard](https://github.com/AutoplayAutomation/Unity_AutoPlay_Plugin/tree/master/0.00.1/Standard)
-   Place Plugin to Assets Folder
-   Attach plugin to any longlive gameobject or controller
 Attach it in not destroyable controller  

> `new  GameObject("Automation").AddComponent<AutoPlay.Unity.StartPlay>().transform.parent  =  transform.parent;`

Or you can create MonoBehaviour script and attach to any longlive game object

> `void  Start () {
if(GameObject.Find("AutoPlayAutomation") ==  null){
DontDestroyOnLoad(new  GameObject("AutoPlayAutomation").AddComponent<AutoPlay.Unity.StartPlay>());
}
}`

 - Package and run game

After Start game -  AutoPlay logo should be presented

![logo](https://github.com/AutoplayAutomation/Unity_AutoPlay_Plugin/blob/master/Documentation/img/logo.png)
