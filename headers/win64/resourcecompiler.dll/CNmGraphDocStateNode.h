#pragma once

class CNmGraphDocStateNode : public CNmGraphDocStateMachineGraphNode /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CNmGraphDocStateNode::StateType_t m_type; // offset 0x58, size 0x4, align 4 | MPropertyHideField
    V_uuid_t m_cloneSourceStateID; // offset 0x5C, size 0x10, align 4 | MPropertySuppressField
    V_uuid_t m_cloneStateVersion; // offset 0x6C, size 0x10, align 4 | MPropertySuppressField
    char _pad_007C[0x4]; // offset 0x7C
    CUtlVector< CNmGraphDocStateNode::StateEvent_t > m_stateEvents; // offset 0x80, size 0x18, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timedStateEvents; // offset 0x98, size 0x18, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CGlobalSymbol > m_events; // offset 0xB0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_entryEvents; // offset 0xC8, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_executeEvents; // offset 0xE0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CGlobalSymbol > m_exitEvents; // offset 0xF8, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeRemainingEvents; // offset 0x110, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CNmGraphDocStateNode::TimedStateEvent_t > m_timeElapsedEvents; // offset 0x128, size 0x18, align 8 | MPropertySuppressField
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // offset 0x140, size 0x1, align 1 | MPropertyGroupName
    char _pad_0141[0x7]; // offset 0x141
};
