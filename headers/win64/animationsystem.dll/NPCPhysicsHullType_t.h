#pragma once

enum NPCPhysicsHullType_t : uint32_t  // sizeof 0x4
{
    eInvalid = 0,
    eGroundCapsule = 1,
    eCenteredCapsule = 2,
    eGenericCapsule = 3,
    eGroundBox = 4,
    eGroundCylinder = 5,
    eCenteredCylinder = 6,
};
