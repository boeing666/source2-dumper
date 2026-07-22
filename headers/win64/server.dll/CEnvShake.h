#pragma once

class CEnvShake : public CPointEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_limitToEntity; // offset 0x4A0, size 0x8, align 8
    float32 m_Amplitude; // offset 0x4A8, size 0x4, align 4
    float32 m_Frequency; // offset 0x4AC, size 0x4, align 4
    float32 m_Duration; // offset 0x4B0, size 0x4, align 4
    float32 m_Radius; // offset 0x4B4, size 0x4, align 4
    GameTime_t m_stopTime; // offset 0x4B8, size 0x4, align 255
    GameTime_t m_nextShake; // offset 0x4BC, size 0x4, align 255
    float32 m_currentAmp; // offset 0x4C0, size 0x4, align 4
    Vector m_maxForce; // offset 0x4C4, size 0xC, align 4
    IPhysicsMotionController* m_pShakeController; // offset 0x4D0, size 0x8, align 8 | MPhysPtr
    CPhysicsShake m_shakeCallback; // offset 0x4D8, size 0x18, align 255
};
