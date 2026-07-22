#pragma once

class CSequenceTransitioner2  // sizeof 0x158, align 0xFF [trivial_dtor] (server)
{
public:
    CNetworkedSequenceOperation m_currentOp; // offset 0x0, size 0x28, align 8
    float32 m_flCurrentPlaybackRate; // offset 0x28, size 0x4, align 4
    GameTime_t m_flCurrentAnimTime; // offset 0x2C, size 0x4, align 255
    TransitioningLayer_t[4] m_transitioningLayers; // offset 0x30, size 0x120, align 8
    CBaseAnimatingController* m_pOwner; // offset 0x150, size 0x8, align 8
};
