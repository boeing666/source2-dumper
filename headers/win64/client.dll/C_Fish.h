#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0x1358, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1268]; // offset 0x0
    VectorWS m_pos; // offset 0x1268, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0x1274, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0x1280, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0x128C, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0x1290, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0x1294, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0x1298, size 0x4, align 4 | MNotSaved
    char _pad_129C[0x4]; // offset 0x129C
    CountdownTimer m_wiggleTimer; // offset 0x12A0, size 0x18, align 8 | MNotSaved
    float32 m_wigglePhase; // offset 0x12B8, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0x12BC, size 0x4, align 4 | MNotSaved
    VectorWS m_actualPos; // offset 0x12C0, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0x12CC, size 0xC, align 4 | MNotSaved
    VectorWS m_poolOrigin; // offset 0x12D8, size 0xC, align 4 | MNotSaved
    float32 m_waterLevel; // offset 0x12E4, size 0x4, align 4 | MNotSaved
    bool m_gotUpdate; // offset 0x12E8, size 0x1, align 1 | MNotSaved
    char _pad_12E9[0x3]; // offset 0x12E9
    float32 m_x; // offset 0x12EC, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0x12F0, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0x12F4, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0x12F8, size 0x4, align 4 | MNotSaved
    float32[20] m_errorHistory; // offset 0x12FC, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0x134C, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0x1350, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0x1354, size 0x4, align 4 | MNotSaved
};
