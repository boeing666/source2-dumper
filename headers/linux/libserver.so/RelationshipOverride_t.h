#pragma once

struct RelationshipOverride_t : public Relationship_t /*0x0*/  // sizeof 0x10, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CBaseEntity > entity; // offset 0x8, size 0x4, align 4
    Class_T classType; // offset 0xC, size 0x4, align 4
};
