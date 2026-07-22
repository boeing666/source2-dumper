#pragma once

class CNmGraphDocStateNode : public CNmGraphDocStateMachineGraphNode /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CNmGraphDocStateNode::StateType_t m_type; // offset 0x50, size 0x4, align 4 | MPropertyHideField
    V_uuid_t m_cloneSourceStateID; // offset 0x54, size 0x10, align 4 | MPropertySuppressField
    char _pad_0064[0x4]; // offset 0x64
    CUtlVector< CNmGraphDocStateNode::StateEvent_t > m_stateEvents; // offset 0x68, size 0x18, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timedStateEvents; // offset 0x80, size 0x18, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CGlobalSymbol > m_events; // offset 0x98, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_entryEvents; // offset 0xB0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_executeEvents; // offset 0xC8, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_exitEvents; // offset 0xE0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeRemainingEvents; // offset 0xF8, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeElapsedEvents; // offset 0x110, size 0x18, align 8 | MPropertySuppressField
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // offset 0x128, size 0x1, align 1 | MPropertyGroupName
    char _pad_0129[0x7]; // offset 0x129
};
