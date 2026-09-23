#pragma once

class CFish : public CBaseAnimGraph /*0x0*/  // sizeof 0xB50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    CHandle< CFishPool > m_pool; // offset 0xA40, size 0x4, align 4
    uint32 m_id; // offset 0xA44, size 0x4, align 4
    float32 m_x; // offset 0xA48, size 0x4, align 4 | MNotSaved
    float32 m_y; // offset 0xA4C, size 0x4, align 4 | MNotSaved
    float32 m_z; // offset 0xA50, size 0x4, align 4 | MNotSaved
    float32 m_angle; // offset 0xA54, size 0x4, align 4
    float32 m_angleChange; // offset 0xA58, size 0x4, align 4
    Vector m_forward; // offset 0xA5C, size 0xC, align 4
    Vector m_perp; // offset 0xA68, size 0xC, align 4
    VectorWS m_poolOrigin; // offset 0xA74, size 0xC, align 4
    float32 m_waterLevel; // offset 0xA80, size 0x4, align 4
    float32 m_speed; // offset 0xA84, size 0x4, align 4
    float32 m_desiredSpeed; // offset 0xA88, size 0x4, align 4
    float32 m_calmSpeed; // offset 0xA8C, size 0x4, align 4
    float32 m_panicSpeed; // offset 0xA90, size 0x4, align 4
    float32 m_avoidRange; // offset 0xA94, size 0x4, align 4
    CountdownTimer m_turnTimer; // offset 0xA98, size 0x18, align 8 | MNotSaved
    bool m_turnClockwise; // offset 0xAB0, size 0x1, align 1
    char _pad_0AB1[0x7]; // offset 0xAB1
    CountdownTimer m_goTimer; // offset 0xAB8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_moveTimer; // offset 0xAD0, size 0x18, align 8 | MNotSaved
    CountdownTimer m_panicTimer; // offset 0xAE8, size 0x18, align 8 | MNotSaved
    CountdownTimer m_disperseTimer; // offset 0xB00, size 0x18, align 8 | MNotSaved
    CountdownTimer m_proximityTimer; // offset 0xB18, size 0x18, align 8 | MNotSaved
    CUtlVector< CFish* > m_visible; // offset 0xB30, size 0x18, align 8 | MNotSaved
    char _pad_0B48[0x8]; // offset 0xB48
};
