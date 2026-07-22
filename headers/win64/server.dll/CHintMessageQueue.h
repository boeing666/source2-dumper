#pragma once

class CHintMessageQueue  // sizeof 0x28, align 0xFF (server)
{
public:
    float32 m_tmMessageEnd; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CHintMessage* > m_messages; // offset 0x8, size 0x18, align 8
    CBasePlayerController* m_pPlayerController; // offset 0x20, size 0x8, align 8
};
