#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0xEE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    VectorWS m_pos; // offset 0xDF8, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0xE04, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0xE10, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0xE1C, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0xE20, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0xE24, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0xE28, size 0x4, align 4 | MNotSaved
    char _pad_0E2C[0x4]; // offset 0xE2C
    CountdownTimer m_wiggleTimer; // offset 0xE30, size 0x18, align 8 | MNotSaved
    float32 m_wigglePhase; // offset 0xE48, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0xE4C, size 0x4, align 4 | MNotSaved
    VectorWS m_actualPos; // offset 0xE50, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0xE5C, size 0xC, align 4 | MNotSaved
    VectorWS m_poolOrigin; // offset 0xE68, size 0xC, align 4 | MNotSaved
    float32 m_waterLevel; // offset 0xE74, size 0x4, align 4 | MNotSaved
    bool m_gotUpdate; // offset 0xE78, size 0x1, align 1 | MNotSaved
    char _pad_0E79[0x3]; // offset 0xE79
    float32 m_x; // offset 0xE7C, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xE80, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xE84, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xE88, size 0x4, align 4 | MNotSaved
    float32[20] m_errorHistory; // offset 0xE8C, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0xEDC, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0xEE0, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0xEE4, size 0x4, align 4 | MNotSaved
};
