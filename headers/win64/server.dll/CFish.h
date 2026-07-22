#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xA70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0x960, size 0x4, align 4
    uint32 m_id; // offset 0x964, size 0x4, align 4
    float32 m_x; // offset 0x968, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0x96C, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0x970, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0x974, size 0x4, align 4
    float32 m_angleChange; // offset 0x978, size 0x4, align 4
    Vector m_forward; // offset 0x97C, size 0xC, align 4
    Vector m_perp; // offset 0x988, size 0xC, align 4
    VectorWS m_poolOrigin; // offset 0x994, size 0xC, align 4
    float32 m_waterLevel; // offset 0x9A0, size 0x4, align 4
    float32 m_speed; // offset 0x9A4, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0x9A8, size 0x4, align 4
    float32 m_calmSpeed; // offset 0x9AC, size 0x4, align 4
    float32 m_panicSpeed; // offset 0x9B0, size 0x4, align 4
    float32 m_avoidRange; // offset 0x9B4, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0x9B8, size 0x18, align 8 | MNotSaved
    bool m_turnClockwise; // offset 0x9D0, size 0x1, align 1
    char _pad_09D1[0x7]; // offset 0x9D1
    CountdownTimer m_goTimer; // offset 0x9D8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0x9F0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xA08, size 0x18, align 8 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xA20, size 0x18, align 8 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xA38, size 0x18, align 8 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xA50, size 0x18, align 8 | MNotSaved
    char _pad_0A68[0x8]; // offset 0xA68
};
