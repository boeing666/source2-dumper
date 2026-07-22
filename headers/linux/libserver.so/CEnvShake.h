#pragma once

class CEnvShake : public CPointEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_limitToEntity; // offset 0x778, size 0x8, align 8
    float32 m_Amplitude; // offset 0x780, size 0x4, align 4
    float32 m_Frequency; // offset 0x784, size 0x4, align 4
    float32 m_Duration; // offset 0x788, size 0x4, align 4
    float32 m_Radius; // offset 0x78C, size 0x4, align 4
    GameTime_t m_stopTime; // offset 0x790, size 0x4, align 255
    GameTime_t m_nextShake; // offset 0x794, size 0x4, align 255
    float32 m_currentAmp; // offset 0x798, size 0x4, align 4
    Vector m_maxForce; // offset 0x79C, size 0xC, align 4
    IPhysicsMotionController* m_pShakeController; // offset 0x7A8, size 0x8, align 8 | MPhysPtr
    CPhysicsShake m_shakeCallback; // offset 0x7B0, size 0x18, align 8
};
