#pragma once

class CBodyComponentSkeletonInstance : public CBodyComponent /*0x0*/  // sizeof 0x510, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CSkeletonInstance m_skeletonInstance; // offset 0x80, size 0x490, align 16
};
