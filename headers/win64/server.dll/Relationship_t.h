#pragma once

struct Relationship_t  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
    Disposition_t disposition; // offset 0x0, size 0x4, align 4
    int32 priority; // offset 0x4, size 0x4, align 4
};
