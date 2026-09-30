#pragma once

struct HandshakeInfo_t  // sizeof 0x28, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_sHandshakeName; // offset 0x0, size 0x8, align 8
    uint64 m_nActiveEventUniqueID; // offset 0x8, size 0x8, align 8 | MNotSaved
    GameTick_t m_nLastHandshakeUpdateTick; // offset 0x10, size 0x4, align 255
    HandshakeState_t m_nHandshakeState; // offset 0x14, size 0x1, align 1
    HandshakeTagState_t m_nAG2EmulatedState; // offset 0x15, size 0x1, align 1
    TaskHandshakeScope_t m_nHandshakeScope; // offset 0x16, size 0x1, align 1
    bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // offset 0x17, size 0x1, align 1
    BodySectionMutex_t m_eBodySectionMutex; // offset 0x18, size 0x4, align 4
    BodySectionMutex_t m_ePreviousBodySectionMutex; // offset 0x1C, size 0x4, align 4
    HandshakeRestartType_t m_eRestartType; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
