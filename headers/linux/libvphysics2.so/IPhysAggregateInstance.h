#pragma once

class IPhysAggregateInstance : public IPhysicsBodyList /*0x0*/  // sizeof 0x18, align 0xFF [vtable abstract] (vphysics2)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    void* m_pSkeleton; // offset 0x8, size 0x8, align 8
    bool m_bIsAxisAligned; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
