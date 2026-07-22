#pragma once

class VelocitySampler  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
public:
    Vector m_prevSample; // offset 0x0, size 0xC, align 4
    GameTime_t m_fPrevSampleTime; // offset 0xC, size 0x4, align 255
    float32 m_fIdealSampleRate; // offset 0x10, size 0x4, align 4
};
