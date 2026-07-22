#pragma once

struct HandshakeInfo_t  // sizeof 0x18, align 0xFF [trivial_dtor] (server)
{
    CGlobalSymbol m_sHandshakeName; // offset 0x0, size 0x8, align 8
    uint64 m_nActiveEventUniqueID; // offset 0x8, size 0x8, align 8
    GameTick_t m_nLastHandshakeUpdateTick; // offset 0x10, size 0x4, align 255
    HandshakeState_t m_nHandshakeState; // offset 0x14, size 0x1, align 1
    HandshakeTagState_t m_nAG2EmulatedState; // offset 0x15, size 0x1, align 1
    TaskHandshakeScope_t m_nHandshakeScope; // offset 0x16, size 0x1, align 1
    bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // offset 0x17, size 0x1, align 1
};
