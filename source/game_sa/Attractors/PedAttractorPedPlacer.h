#pragma once

class CPed;
class CEntity;
struct C2dEffectPedAttractor;

class CPedAttractorPedPlacer {
public:
    static void InjectHooks();

    static void PlacePedAtEffect(C2dEffectPedAttractor const& effect, CEntity* entity, CPed* ped, float forwardOffsetMultiplier);
};
