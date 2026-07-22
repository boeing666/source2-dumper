#pragma once

class CBaseProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x11B0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    bool m_bModelOverrodeBlockLOS; // offset 0x1180, size 0x1, align 1
    char _pad_1181[0x3]; // offset 0x1181
    int32 m_iShapeType; // offset 0x1184, size 0x4, align 4
    bool m_bConformToCollisionBounds; // offset 0x1188, size 0x1, align 1
    char _pad_1189[0x7]; // offset 0x1189
    CTransform m_mPreferredCatchTransform; // offset 0x1190, size 0x20, align 16
};
