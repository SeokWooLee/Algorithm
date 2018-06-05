#include <stdio.h>

/*
   이 페스티벌은 여러 날 동안 진행된다.
   하루에 한 팀의 밴드가 공연장에서 콘서트를 하게 된다.
   전체 밴드를 몇 팀 섭외할지는 아직 결정되지 않았다.
   페스티벌의 간판 스타인 L개의 팀은 섭외 완료됨.
   따라서 최소 L일 이상 페스티벌은 진행된다.
   공연장을 빌리는 비용은 매일 다르다.
   N일 간의 공연장 대여 비용을 안다.
   L일 이상을 연속 대여하면서 공연의 평균 비용을 최소화하려면? */

/*
   입력의 첫 줄에는 테스트 케이스의 수가 주어진다.
   각 테스트 케이스의 첫 줄에는 공연장을 대여할 수 있는 날들의 수와 이미 섭외한 공연 팀의 수가 주어진다.
   그 다음 줄에는 N개의 숫자로 공연장 대여 비용이 날짜별로 주어진다.
   */

#define MAX_COST 100

void runAlgorithm(void);
void printMinimumRentalCost(int, int, int[]);

int main(void)
{
	runAlgorithm();
	return 0;
}

void runAlgorithm(void)
{
	int testCases;
	scanf("%d", &testCases);
	
	for (int i = 0; i < testCases; i++) {
		int availableRentalDays, fixedNumberOfTeams;
		scanf("%d %d", &availableRentalDays, &fixedNumberOfTeams);

		int costsForRentalDays[availableRentalDays];
		for (int j = 0; j < availableRentalDays; j++) {
			scanf("%d", &costsForRentalDays[j]);
		}

		printMinimumRentalCost(availableRentalDays, fixedNumberOfTeams, costsForRentalDays);
	}
}

void printMinimumRentalCost(int availableRentalDays, int fixedNumberOfTeams, int costsForRentalDays[])
{
	float min = MAX_COST;
	int availableTeamNumbers = availableRentalDays - fixedNumberOfTeams + 1;
	float minimumCosts[availableTeamNumbers];
	for (int i = 0; i < availableTeamNumbers; i++) {
		minimumCosts[i] = MAX_COST;
	}

	

	printf("%f\n", min);
}
