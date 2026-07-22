#pragma once

class C_CSequenceTransitioner2  // sizeof 0x1B8, align 0xFF (client)
{
public:
    CNetworkedSequenceOperation m_currentOp; // offset 0x0, size 0x28, align 8
    float32 m_flCurrentPlaybackRate; // offset 0x28, size 0x4, align 4
    GameTime_t m_flCurrentAnimTime; // offset 0x2C, size 0x4, align 255
    TransitioningLayer_t[4] m_transitioningLayers; // offset 0x30, size 0x120, align 8
    C_BaseAnimatingController* m_pOwner; // offset 0x150, size 0x8, align 8
    char _pad_0158[0x60]; // offset 0x158
};
