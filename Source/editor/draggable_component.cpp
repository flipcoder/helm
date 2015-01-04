/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "draggable_component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DraggableComponent::DraggableComponent ()
{

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DraggableComponent::~DraggableComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DraggableComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.setColour (Colour (0xa98b93ff));
    g.fillRoundedRectangle (static_cast<float> (proportionOfWidth (0.5000f) - ((getWidth() - 4) / 2)), static_cast<float> (proportionOfHeight (0.5000f) - ((getHeight() - 4) / 2)), static_cast<float> (getWidth() - 4), static_cast<float> (getHeight() - 4), 2.000f);

    g.setColour (Colour (0xff2a55a5));
    g.drawRoundedRectangle (static_cast<float> (proportionOfWidth (0.5000f) - ((getWidth() - 4) / 2)), static_cast<float> (proportionOfHeight (0.5000f) - ((getHeight() - 4) / 2)), static_cast<float> (getWidth() - 4), static_cast<float> (getHeight() - 4), 2.000f, 4.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DraggableComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DraggableComponent::moved()
{
    //[UserCode_moved] -- Add your code here...
    Rectangle<int> parent_bounds = getParentComponent()->getLocalBounds();
    Rectangle<int> constrained_bounds = getBoundsInParent().constrainedWithin(parent_bounds);
    if (constrained_bounds != getBoundsInParent())
        setBounds(constrained_bounds);
    //[/UserCode_moved]
}

void DraggableComponent::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    dragger_.startDraggingComponent(this, e);
    //[/UserCode_mouseDown]
}

void DraggableComponent::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    dragger_.dragComponent(this, e, nullptr);
    //[/UserCode_mouseDrag]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DraggableComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
    <METHOD name="moved()"/>
  </METHODS>
  <BACKGROUND backgroundColour="464646">
    <ROUNDRECT pos="50%c 50%c 4M 4M" cornerSize="2" fill="solid: a98b93ff" hasStroke="1"
               stroke="4, mitered, butt" strokeColour="solid: ff2a55a5"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
