#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xBF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0xAE0, size 0x4, align 4
    uint32 m_id; // offset 0xAE4, size 0x4, align 4
    float32 m_x; // offset 0xAE8, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xAEC, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xAF0, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xAF4, size 0x4, align 4
    float32 m_angleChange; // offset 0xAF8, size 0x4, align 4
    Vector m_forward; // offset 0xAFC, size 0xC, align 4
    Vector m_perp; // offset 0xB08, size 0xC, align 4
    VectorWS m_poolOrigin; // offset 0xB14, size 0xC, align 4
    float32 m_waterLevel; // offset 0xB20, size 0x4, align 4
    float32 m_speed; // offset 0xB24, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0xB28, size 0x4, align 4
    float32 m_calmSpeed; // offset 0xB2C, size 0x4, align 4
    float32 m_panicSpeed; // offset 0xB30, size 0x4, align 4
    float32 m_avoidRange; // offset 0xB34, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0xB38, size 0x18, align 8 | MNotSaved
    bool m_turnClockwise; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0x7]; // offset 0xB51
    CountdownTimer m_goTimer; // offset 0xB58, size 0x18, align 8 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0xB70, size 0x18, align 8 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xB88, size 0x18, align 8 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xBA0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xBB8, size 0x18, align 8 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xBD0, size 0x18, align 8 | MNotSaved
    char _pad_0BE8[0x8]; // offset 0xBE8
};
