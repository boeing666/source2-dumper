#pragma once

class C_Fish : public CBaseAnimGraph /*0x0*/  // sizeof 0x11F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    VectorWS m_pos; // offset 0x1108, size 0xC, align 4 | MNotSaved
    Vector m_vel; // offset 0x1114, size 0xC, align 4 | MNotSaved
    QAngle m_angles; // offset 0x1120, size 0xC, align 4 | MNotSaved
    int32 m_localLifeState; // offset 0x112C, size 0x4, align 4 | MNotSaved
    float32 m_deathDepth; // offset 0x1130, size 0x4, align 4 | MNotSaved
    float32 m_deathAngle; // offset 0x1134, size 0x4, align 4 | MNotSaved
    float32 m_buoyancy; // offset 0x1138, size 0x4, align 4 | MNotSaved
    char _pad_113C[0x4]; // offset 0x113C
    CountdownTimer m_wiggleTimer; // offset 0x1140, size 0x18, align 8 | MNotSaved
    float32 m_wigglePhase; // offset 0x1158, size 0x4, align 4 | MNotSaved
    float32 m_wiggleRate; // offset 0x115C, size 0x4, align 4 | MNotSaved
    VectorWS m_actualPos; // offset 0x1160, size 0xC, align 4 | MNotSaved
    QAngle m_actualAngles; // offset 0x116C, size 0xC, align 4 | MNotSaved
    VectorWS m_poolOrigin; // offset 0x1178, size 0xC, align 4 | MNotSaved
    float32 m_waterLevel; // offset 0x1184, size 0x4, align 4 | MNotSaved
    bool m_gotUpdate; // offset 0x1188, size 0x1, align 1 | MNotSaved
    char _pad_1189[0x3]; // offset 0x1189
    float32 m_x; // offset 0x118C, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0x1190, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0x1194, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0x1198, size 0x4, align 4 | MNotSaved
    float32[20] m_errorHistory; // offset 0x119C, size 0x50, align 4 | MNotSaved
    int32 m_errorHistoryIndex; // offset 0x11EC, size 0x4, align 4 | MNotSaved
    int32 m_errorHistoryCount; // offset 0x11F0, size 0x4, align 4 | MNotSaved
    float32 m_averageError; // offset 0x11F4, size 0x4, align 4 | MNotSaved
};
