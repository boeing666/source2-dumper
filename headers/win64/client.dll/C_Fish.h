#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0xE90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    VectorWS m_pos; // offset 0xDA0, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0xDAC, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0xDB8, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0xDC4, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0xDC8, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0xDCC, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0xDD0, size 0x4, align 4 | MNotSaved
    char _pad_0DD4[0x4]; // offset 0xDD4
    CountdownTimer m_wiggleTimer; // offset 0xDD8, size 0x18, align 8 | MNotSaved
    float32 m_wigglePhase; // offset 0xDF0, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0xDF4, size 0x4, align 4 | MNotSaved
    VectorWS m_actualPos; // offset 0xDF8, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0xE04, size 0xC, align 4 | MNotSaved
    VectorWS m_poolOrigin; // offset 0xE10, size 0xC, align 4 | MNotSaved
    float32 m_waterLevel; // offset 0xE1C, size 0x4, align 4 | MNotSaved
    bool m_gotUpdate; // offset 0xE20, size 0x1, align 1 | MNotSaved
    char _pad_0E21[0x3]; // offset 0xE21
    float32 m_x; // offset 0xE24, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xE28, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xE2C, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xE30, size 0x4, align 4 | MNotSaved
    float32[20] m_errorHistory; // offset 0xE34, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0xE84, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0xE88, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0xE8C, size 0x4, align 4 | MNotSaved
};
