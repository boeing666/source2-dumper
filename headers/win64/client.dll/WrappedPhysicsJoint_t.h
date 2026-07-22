#pragma once

struct WrappedPhysicsJoint_t  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
    IPhysicsJoint* m_pJoint; // offset 0x0, size 0x8, align 8 | MPhysPtr
};
