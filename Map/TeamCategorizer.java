import java.util.ArrayList;

public class TeamCategorizer {
    public static void main(String[] args) {
        // List of team members and their scores
        String[] teamMembers = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hank"};
        int[] scores = {50, 60, 70, 80, 90, 85, 75, 65}; // Scores for each team member
        
        // Team colors
        String oddTeamColor = "Blue";
        String evenTeamColor = "Green";

        // Teams
        ArrayList<String> teamOdd = new ArrayList<>(); // Odd team (Blue)
        ArrayList<String> teamEven = new ArrayList<>(); // Even team (Green)
        int totalScoreOdd = 0;
        int totalScoreEven = 0;

        // Categorizing members and calculating scores
        for (int i = 0; i < teamMembers.length; i++) {
            if ((i + 1) % 2 == 0) { // Even index (1-based)
                teamEven.add(teamMembers[i]);
                totalScoreEven += scores[i];
            } else { // Odd index (1-based)
                teamOdd.add(teamMembers[i]);
                totalScoreOdd += scores[i];
            }
        }

        // Displaying categorized teams, their scores, and colors
        System.out.println(oddTeamColor + " Team (Odd): " + teamOdd + " | Total Score: " + totalScoreOdd);
        System.out.println(evenTeamColor + " Team (Even): " + teamEven + " | Total Score: " + totalScoreEven);
    }
}
