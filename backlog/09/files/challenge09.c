#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <spawn.h>

char * const* restrict strings[] = {
	"3a7ecaeb-05e1-4e76-9fe3-07a80869ca21", "45d83f5f-9b73-4ee3-a819-4f8241b3145d", "19822fd1-43e4-4518-8db0-a7e69c7003bf", "f196f50b-b2ae-407d-a766-be3b12ef05e0", "49229c78-8beb-4f1a-a18b-291bee0a1666", "97a42cf4-2f62-45b2-8166-68d1b01025c6", "2cd1cdb3-d350-48f0-99eb-bf9fc89a48ef", "5e1e6abe-32bc-4f77-a139-c4925c302821", "6697c4d6-854b-4f04-aa12-f8519c9924ea", "9d356f94-5614-4dd5-b370-fe08b972fab2", "acd043ad-6c85-4aec-b4ee-151eabe79094", "fe0310dc-6245-4c0b-a926-2b321602b679", "6803c973-d719-4fed-8021-151db1da5eea", "39e7c12a-244c-4d39-8d4d-188c4237fe20", "74da08af-5372-4093-a511-21d865d046ba", "4944c195-ffad-4d23-bed1-d59a21307a09", "a1b3f4d3-9bac-44dc-834e-52e188e3e5ce", "41883cc8-6dc7-4d47-afdb-e2c94b9b3585", "52811cdf-533d-4da3-880c-e9ca2cbc3c81", "e4aa8239-e5a5-4041-9e28-13cd3745cc9c", "4eb1a8f2-71d3-4704-aeff-d6607fc5da0d", "cd41d518-93c9-4ceb-97dc-7e42a393f606", "4dc20720-d081-45fd-a6dc-89a60174e60d", "3b42b7ee-f70d-41d1-8ac0-08d0f1ee0309", "362119bb-c404-4d71-a015-1f3acc9009b0", "7d4a1f12-c077-4c03-a1b3-8ec7b0e5d672", "f75800f7-b83c-465b-a861-b32e717d294a", "8bd6db81-cb5e-4d11-867d-b27bf8bcc4d8", "2b46f836-957c-4e40-9307-fbe3af672299", "a5431d5a-82a2-4c1b-b678-6c55050f8126", "5e906ad6-722d-4b94-96b1-b836c4be7220", "bca339d7-156b-499f-baec-3f8d140c1080", "2a87c67e-1069-438e-bda8-eba050a5a0ac", "50372fe0-0e58-4c56-b331-fac171f77c4f", "a66bfa1e-31b6-4471-9873-6579ff80f32c", "c5b0c6a2-7906-4810-b055-742f77955ab2", "80770483-e4c5-4592-a99b-6d18973b1eff", "f3388af2-6cda-498c-81dc-8b5792ac7728", "664858b5-a453-4075-a05b-c0bbbdb6c7e7", "1bb8644f-46e3-4aba-b7bf-b99f8e8de2e7", "aa6d9050-b1ef-4272-b2cf-8bc9518f5ca0", "{{flag}}"
};
//a[40] = "{{flag}}";

extern char **environ;

int main(int argc, char const* argv[])
{
	int random_value = rand();
	int S = 40;
    int rand_range = random_value % S; //between 0 and 40

	pid_t pid;
	int status = posix_spawn(&pid, "./.challenge09", NULL, NULL, strings[rand_range], environ);
    if(status != 0) {
        fprintf(stderr, strerror(status));
        return 1;
    }
	int rand_range2 = random_value % 3;
	sleep(rand_range2);
	return 0;
}

